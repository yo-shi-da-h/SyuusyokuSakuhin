#include "GameScene.h"


using namespace MathUtility;
GameScene::~GameScene()
{
	delete backGroundSprite_;
}
void GameScene::Initialize() {
	// 初期化処理
	dxCommon_ = KamataEngine::DirectXCommon::GetInstance();
	input_ = KamataEngine::Input::GetInstance();
	
	textureHandle_ = KamataEngine::TextureManager::Load("haikei.png");
	backGroundSprite_ = Sprite::Create(textureHandle_, {0.0f,0.0f});
}
void GameScene::Update() {
	// 更新処理
}
void GameScene::Draw() {
	// 描画処理
	DirectXCommon* dxCommon = DirectXCommon::GetInstance();

	Sprite::PreDraw(dxCommon->GetCommandList());
	
	backGroundSprite_->Draw();
	Sprite::PostDraw();
}
