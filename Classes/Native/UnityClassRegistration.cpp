struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 57 classes
	//0. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//5. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//8. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//9. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//10. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//11. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//12. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//13. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//14. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//15. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//16. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//17. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//18. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//19. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//20. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//21. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//22. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//23. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//24. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//25. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//26. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//27. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//28. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//29. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//30. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//31. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//32. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//33. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//34. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//35. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//36. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//37. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//38. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//39. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//40. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//41. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//42. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//43. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//44. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//45. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//46. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//47. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//48. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//49. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//50. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//51. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//52. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//53. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//54. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//55. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//56. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
