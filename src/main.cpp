#include <iomanip>
#include <iostream>

#include "abstract_factory/abstract_factory.h"
#include "adapter/adapter.h"
#include "bridge/bridge.h"
#include "builder/builder.h"
#include "chain_of_responsibility/chain_of_responsibility.h"
#include "command/command.h"
#include "compose/compose.h"
#include "decorator/decorator.h"
#include "facade/facade.h"
#include "factory/factory.h"
#include "flyweight/flyweight.h"
#include "prototype/prototype.h"
#include "proxy/proxy.h"
#include "simple_factory/simple_factory.h"
#include "singleton/singleton.h"

void print_func_begin(const std::string& func_name) {
    std::cout.setf(std::ios::right);
    std::cout << std::setw(30) << std::setfill('#') << " begin " << func_name
              << " "
              << "############################" << std::endl;
}
void print_func_end(const std::string& func_name) {

    std::cout.setf(std::ios::right);
    std::cout << std::setw(30) << std::setfill('#') << " end " << func_name
              << " "
              << "############################" << std::endl;
    std::cout << std::endl;
}

void test_simple_factory() {
    print_func_begin("simple factory");
    simple_factory::SimpleFactory simple_factory;
    std::cout << simple_factory.GetProductByName("football")->GetName()
              << std::endl;

    std::cout << simple_factory.GetProductByName("basketball")->GetName()
              << std::endl;
    print_func_end("simple factory");
}

void test_factory() {
    print_func_begin("factory");
    std::shared_ptr<factory::IFactory> factory =
            std::make_shared<factory::FootballFactory>();
    std::cout << factory->GetProduct()->GetName() << std::endl;

    factory = std::make_shared<factory::BasketballFactory>();
    std::cout << factory->GetProduct()->GetName() << std::endl;
    print_func_end("factory");
}

void test_abstract_factory() {
    print_func_begin("abstract factory");
    std::shared_ptr<abstract_factory::IAbstractFactory> abstract_factory =
            std::make_shared<abstract_factory::BasketballAbstractFactory>();
    std::cout << abstract_factory->GetBall()->GetBallName() << std::endl;
    std::cout << abstract_factory->GetCloth()->GetClothName() << std::endl;

    abstract_factory =
            std::make_shared<abstract_factory::FootballAbstractFactory>();
    std::cout << abstract_factory->GetBall()->GetBallName() << std::endl;
    std::cout << abstract_factory->GetCloth()->GetClothName() << std::endl;

    print_func_end("abstract factory");
}

void test_builder() {
    print_func_begin("builder");
    builder::Director director;
    director.SetBuilder(std::make_shared<builder::ABuilder>());
    director.BuildHouse()->PrintHouseInfo();

    director.SetBuilder(std::make_shared<builder::BBuilder>());
    director.BuildHouse()->PrintHouseInfo();

    print_func_end("builder");
}
void test_prototype() {
    print_func_begin("prototype");
    prototype::CoffeeCup coffee_cup;
    coffee_cup.SetCupColor("green");
    coffee_cup.SetCupName("green coffee cup");
    coffee_cup.PrintCupInfo();

    auto new_coffee_cup = coffee_cup.clone();
    new_coffee_cup->SetCupName("new coffee cup");
    new_coffee_cup->PrintCupInfo();

    print_func_end("prototype");
}
void test_singleton() {
    print_func_begin("singleton");
    std::cout << singleton::DeviceInfoSigleton::GetInstance().GetDeivceName()
              << std::endl;
    singleton::DeviceInfoSigleton::GetInstance().SetDeviceName(
            "new singleton device");

    std::cout << singleton::DeviceInfoSigleton::GetInstance().GetDeivceName()
              << std::endl;

    print_func_end("singleton");
}
void test_adapter() {
    print_func_begin("adapter");
    std::shared_ptr<adapter::ASocket> asocket =
            std::make_shared<adapter::ASocket>();
    asocket->charge();

    asocket = std::make_shared<adapter::B2AAdapter>();
    asocket->charge();

    print_func_end("adapter");
}
void test_decorator() {
    print_func_begin("decorator");

    std::shared_ptr<decorator::Human> human =
            std::make_shared<decorator::Women>();
    std::shared_ptr<decorator::WomenDecorator> women_decoraor =
            std::make_shared<decorator::ClothDecorator>(
                    std::make_shared<decorator::ShoesDecorator>(human));
    women_decoraor->Outlook();

    print_func_end("decorator");
}
void test_bridge() {
    print_func_begin("bridge");

    std::shared_ptr<bridge::IGame> game = std::make_shared<bridge::AGame>();
    std::shared_ptr<bridge::IPhone> phone = std::make_shared<bridge::APhone>();

    phone->SetGame(game);
    phone->PlayGame();

    game = std::make_shared<bridge::BGame>();
    phone = std::make_shared<bridge::BPhone>();
    phone->SetGame(game);
    phone->PlayGame();

    print_func_end("bridge");
}
void test_compose() {
    print_func_begin("compose");
    std::shared_ptr<compose::INode> tree =
            std::make_shared<compose::TreeNode>("tree");
    tree->AddNode(std::make_shared<compose::RedLeafNode>("A red leaf node"));
    tree->AddNode(
            std::make_shared<compose::BlackLeafNode>("A black leaf node"));
    tree->PrintName();

    print_func_end("compose");
}
void test_facade() {
    print_func_begin("facade");
    facade::Computer computer;
    computer.PowerOn();

    print_func_end("facade");
}
void test_flyweight() {
    print_func_begin("flyweight");
    std::cout << flyweight::NetDeviceFactory::GetInstance()
                         .GetNetDeviceByType(flyweight::NetDeviceType::kRoute)
                         ->GetDeviceName()
              << std::endl;
    std::cout << flyweight::NetDeviceFactory::GetInstance()
                         .GetNetDeviceByType(flyweight::NetDeviceType::kSwitch)
                         ->GetDeviceName()
              << std::endl;
    print_func_end("flyweight");
}
void test_proxy() {
    print_func_begin("proxy");
    std::shared_ptr<proxy::IHuman> human = std::make_shared<proxy::StarAgent>();
    human->DoThings();
    print_func_end("proxy");
}
void test_chain_of_responsibility() {
    print_func_begin("chain_of_responsibility");
    chain_of_responsibility::Bill bill1("bill1", 30);
    chain_of_responsibility::Bill bill2("bill2", 80);
    chain_of_responsibility::Bill bill3("bill3", 200);

    std::shared_ptr<chain_of_responsibility::IWorker> first_worker =
            std::make_shared<chain_of_responsibility::FirstWorker>();
    std::shared_ptr<chain_of_responsibility::IWorker> sec_worker =
            std::make_shared<chain_of_responsibility::SecWorker>();
    std::shared_ptr<chain_of_responsibility::IWorker> third_worker =
            std::make_shared<chain_of_responsibility::ThirdWorker>();

    first_worker->SetNextWorker(sec_worker);
    sec_worker->SetNextWorker(third_worker);

    std::cout << "-------------------" << std::endl
              << "Bill name : " << bill1.GetBillName() << " money "
              << bill1.GetSumOfMoney() << std::endl;
    first_worker->HandlerRequest(bill1);
    std::cout << "-------------------" << std::endl
              << "Bill name : " << bill2.GetBillName() << " money "
              << bill2.GetSumOfMoney() << std::endl;
    first_worker->HandlerRequest(bill2);
    std::cout << "-------------------" << std::endl
              << "Bill name : " << bill3.GetBillName() << " money "
              << bill3.GetSumOfMoney() << std::endl;
    first_worker->HandlerRequest(bill3);

    print_func_end("chain_of_responsibility");
}
void test_command() {
    print_func_begin("command");
    command::Button button;
    button.SetCommand(std::make_shared<command::FanCommand>());
    button.PressButton();
    button.SetCommand(std::make_shared<command::LightCommand>());
    button.PressButton();
    print_func_end("command");
}
int main(int argc, char const* argv[]) {
    test_simple_factory();
    test_factory();
    test_abstract_factory();
    test_builder();
    test_prototype();
    test_singleton();
    test_adapter();
    test_decorator();
    test_bridge();
    test_compose();
    test_facade();
    test_flyweight();
    test_proxy();
    test_chain_of_responsibility();
    test_command();

    return 0;
}
