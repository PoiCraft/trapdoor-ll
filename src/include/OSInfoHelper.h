//
// Created by xhy on 2022/7/9.
//

#ifndef TRAPDOOR_OSINFOHELPER_H
#define TRAPDOOR_OSINFOHELPER_H
#include <cstdint>
int getCurProcessCPUUsage();
// 获取总的cpu使用率
float GetCPULoad();

/// 获取当前进程内存和虚拟内存使用量，返回-1失败，0成功
int getCurProcessMemUsage(uint64_t* mem, uint64_t* vmem);

int getSystemMemorySize(uint64_t* mem, uint64_t* free);
/// 获取当前进程总共读和写的IO字节数，返回-1失败，0成功

int getIOBytes(uint64_t* read_bytes, uint64_t* write_bytes);

#endif  // TRAPDOOR_OSINFOHELPER_H
