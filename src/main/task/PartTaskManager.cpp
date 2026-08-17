#include "main/task/PartTaskManager.hpp"


THUMB void task::PartTaskManager::run() {
    if (currentTask_) {
        currentTask_->execute();
    }

    if (nextTaskID_ != -1) {
        if (currentTask_) {
            currentTask_->terminate();
        }

        previousTaskID_ = currentTaskID_;
        currentTaskID_ = nextTaskID_;
        nextTaskID_ = -1;

        currentTask_ = parts_[currentTaskID_];
        currentTask_->initialize();

        data_0211ec50.unk14 = 0;
    }

    func_02089ab8();
}


THUMB void task::PartTaskManager::registerTask(int id, PartTask *task)
{
  this->parts_[id] = task;
}

THUMB void task::PartTaskManager::setNextTask(int id)
{
  this->nextTaskID_ = id;
  return;
}

THUMB int task::PartTaskManager::getCurrentTask()
{
  return this->currentTaskID_;
}


THUMB bool task::PartTaskManager::checkTask(int id) {
    return this->currentTaskID_ == id;
}


THUMB void task::PartTaskManager::setNextTaskWithSleep(int id) {
    sleepTaskID_ = currentTaskID_;
    setNextTask(id);
}


THUMB void task::PartTaskManager::wakeup() {
    currentTaskID_ = sleepTaskID_;
    sleepTaskID_ = -1;
    currentTask_ = parts_[currentTaskID_];
}


THUMB void task::PartTaskManager::initialize() {
    this->currentTask_ = 0;
    this->currentTaskID_ = 0;
    this->previousTaskID_ = -1;
    this->nextTaskID_ = -1;
    this->sleepTaskID_ = -1;
}

