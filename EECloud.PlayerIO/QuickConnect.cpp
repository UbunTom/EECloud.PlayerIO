#include "QuickConnect.hpp"
#include "Helpers/Converter.hpp"

namespace EECloud
{
	Client* QuickConnect::SimpleConnect(string gameId, string usernameOrEmail, string password)
	{
		SimpleConnectArgs* simpleConnectArgs = new SimpleConnectArgs;
		simpleConnectArgs->set_gameid(gameId);
		simpleConnectArgs->set_usernameoremail(usernameOrEmail);
		simpleConnectArgs->set_password(password);
		
		ConnectOutput* simpleConnectOutput = _channel->Request<SimpleConnectArgs, ConnectOutput, PlayerIOError>(400,simpleConnectArgs);
		delete simpleConnectArgs;
		
		return new Client(_channel, simpleConnectOutput->token(), simpleConnectOutput->userid());
	}
	
	
	Client* QuickConnect::SimpleRegister(string gameId, string username, string password, string email, string captchaKey, string captchaValue, map<string, string> extraData)
	{
		SimpleRegisterArgs* simpleRegisterArgs = new SimpleRegisterArgs;
		simpleRegisterArgs->set_gameid(gameId);
		simpleRegisterArgs->set_username(username);
		simpleRegisterArgs->set_password(password);
		simpleRegisterArgs->set_email(email);
		simpleRegisterArgs->set_captchakey(captchaKey);
		simpleRegisterArgs->set_captchavalue(captchaValue);
		vector_ExtraData<SimpleRegisterArgs*>(simpleRegisterArgs,Converter::Convert(extraData));
		
		ConnectOutput* simpleRegisterOutput = _channel->Request<SimpleRegisterArgs, ConnectOutput, PlayerIORegistrationError>(403,simpleRegisterArgs);
		delete simpleRegisterArgs;
		
		return new Client(_channel, simpleRegisterOutput->token(), simpleRegisterOutput->userid());
	}
        
	void QuickConnect::SimpleRecoverPassword(string gameId, string usernameOrEmail)
	{
		SimpleRecoverPasswordArgs* simpleRecoverPasswordArgs = new SimpleRecoverPasswordArgs;
		simpleRecoverPasswordArgs->set_gameid(gameId);
		simpleRecoverPasswordArgs->set_usernameoremail(usernameOrEmail);

		_channel->Request<SimpleRecoverPasswordArgs, NoArgsOrOutput, PlayerIOError>(406,simpleRecoverPasswordArgs);
		delete simpleRecoverPasswordArgs;
	}
}
