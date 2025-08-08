#pragma once
#include "KamataEngine.h"

using namespace KamataEngine;
class GameScene
{
public:
	GameScene() = default;
	~GameScene();
	// 初期化
	void Initialize();
	// 更新
	void Update();
	// 描画
	void Draw();
private:
	DirectXCommon* dxCommon_ = nullptr; // DirectXCommonのインスタンス

	// エフェクト3Dモデルデータ
	Model* modelEffect_ = nullptr;

	Camera camera_;
	Input* input_ = nullptr;


	uint32_t textureHandle_ = 0;
	Sprite* backGroundSprite_ = nullptr; //背景の画像
};

