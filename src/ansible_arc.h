#pragma once

#include "main.h"

typedef struct {
	uint32_t clock_period;
} levels_state_t;

typedef struct {
	uint32_t clock_period;
} cycles_state_t;

void set_mode_arc(void);

void handler_ArcFrontShort(s32 data);
void handler_ArcFrontLong(s32 data);

void default_levels(void);
void clock_levels(uint8_t phase);
void ii_levels(uint8_t *d, uint8_t l);
void handler_LevelsEnc(s32 data);
void handler_LevelsRefresh(s32 data);
void handler_LevelsKey(s32 data);
void handler_LevelsTr(s32 data);
void handler_LevelsTrNormal(s32 data);

void default_cycles(void);
void clock_cycles(uint8_t phase);
void ii_cycles(uint8_t *d, uint8_t l);
void handler_CyclesEnc(s32 data);
void handler_CyclesRefresh(s32 data);
void handler_CyclesKey(s32 data);
void handler_CyclesTr(s32 data);
void handler_CyclesTrNormal(s32 data);