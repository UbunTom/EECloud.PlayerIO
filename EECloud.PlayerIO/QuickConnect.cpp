namespace EECloud
{
	Client* SimpleConnect(string gameId, string usernameOrEmail, string password)
	{
		SimpleConnectArgs* simpleConnectArgs = new SimpleConnectArgs;
		simpleConnectArgs->set_GameId(gameId);
		simpleConnectArgs->set_UsernameOrEmail(usernameOrEmail);
		simpleConnectArgs->set_Password(password);
		
		ConnectOutput* simpleConnectOutput = _channel.Request<SimpleConnectArgs*, ConnectOutput*, PlayerIOError*>(400,simpleConnectArgs);
		delete simpleConnectArgs;
		
		return new Client(_channel, simpleConnectOutput->Token, simpleConnectOutput->UserId);
	}
	
	
	Client* SimpleRegister(string gameId, string username, string password, string email = null, string captchaKey = null, string captchaValue = null, Dictionary<string, string> extraData = null)
	{
		SimpleRegisterArgs* simpleRegisterArgs = new SimpleRegisterArgs;
		simpleRegisterArgs->set_GameId(gameId);
		simpleRegisterArgs->set_Username(username);
		simpleRegisterArgs->set_Password(password);
		simpleRegisterArgs->set_Email(email);
		simpleRegisterArgs->set_CaptchaKey(captchaKey);
		simpleRegisterArgs->set_CaptchaValue(captchaValue);
		vector_ExtraData<SimpleRegisterArgs*>(simpleRegisterArgs,Converter.Convert(extraData));
		
		ConnectOutput* simpleRegisterOutput = _channel.Request<SimpleRegisterArgs*, ConnectOutput*, PlayerIORegistrationError*>(403,simpleRegisterArgs);
		delete simpleRegisterArgs;
		
		return new Client(_channel, simpleRegisterOutput->Token, simpleRegisterOutput->UserId);
	}
        
	void SimpleRecoverPassword(string gameId, string usernameOrEmail)
	{
		SimpleRecoverPasswordArgs* simpleRecoverPasswordArgs = new SimpleRecoverPasswordArgs;
		simpleRecoverPasswordArgs->set_GameId(gameId);
		simpleRecoverPasswordArgs->set_UsernameOrEmail(usernameOrEmail);

		_channel.Request<SimpleRecoverPasswordArgs*, NoArgsOrOutput*, PlayerIOError*>(406,simpleRecoverPasswordArgs);
		delete simpleRecoverArgs;
	}
