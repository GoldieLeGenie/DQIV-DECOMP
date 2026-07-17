#include "main/PartTaskManager/PartTaskManager.hpp"



THUMB void PartTaskManager::run() {
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


THUMB void PartTaskManager::registerTask(int id, PartTask *task)
{
  this->parts_[id] = task;
}

THUMB void PartTaskManager::setNextTask(int id)
{
  this->nextTaskID_ = id;
  return;
}

THUMB int PartTaskManager::getCurrentTask()
{
  return this->currentTaskID_;
}


THUMB bool PartTaskManager::checkTask(int id) {
    return this->currentTaskID_ == id;
}


THUMB void PartTaskManager::setNextTaskWithSleep(int id) {
    sleepTaskID_ = currentTaskID_;
    setNextTask(id);
}


THUMB void PartTaskManager::wakeup() {
    currentTaskID_ = sleepTaskID_;
    sleepTaskID_ = -1;
    currentTask_ = parts_[currentTaskID_];
}


THUMB void PartTaskManager::initialize() {
    this->currentTask_ = 0;
    this->currentTaskID_ = 0;
    this->previousTaskID_ = -1;
    this->nextTaskID_ = -1;
    this->sleepTaskID_ = -1;
}

