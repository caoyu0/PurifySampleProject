namespace PublicDLL
{
	EXAMPLEAPI DLLObject::~DLLObject()
	{

	}

	EXAMPLEAPI DLLObject::DLLObject()
	{

	}

	EXAMPLEAPI void DLLObject::AccessPrivate()
	{
		auto pLibObject = new PrivateLib::PrivateLibObject;
		pLibObject->SayHi();
		delete pLibObject;
	}

	EXAMPLEAPI void DLLObject::SayHi()
	{
		printf("Hello! I am from PublicDLL!\n");
	}
}