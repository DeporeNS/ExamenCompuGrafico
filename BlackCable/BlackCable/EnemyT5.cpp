#include "EnemyT5.h"

EnemyT5::EnemyT5(glm::vec3 position, Player *player)
{
	this->player = player;
	this->platform = Platform::GetPtr();
	transform.SetTranslation(position.x, position.y - 8, position.z);
}

void EnemyT5::Update()
{

}

void EnemyT5::Init()
{
	weapon = new Model();
	weapon->LoadModel("Assets/Models/Enemy2.obj");
	weapon->AddTexture("Weapon_UV.png");
}

void EnemyT5::Draw()
{
	transform.SetScale(0.7f, 0.7f, 0.7f);
	transform.SetRotation(0, 55, 0);
	weapon->SetTransform(&transform);
	weapon->Draw();
}
void EnemyT5::Shoot()
{

}