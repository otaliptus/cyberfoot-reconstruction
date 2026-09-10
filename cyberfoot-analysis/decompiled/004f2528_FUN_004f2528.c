// Address: 004f2528
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f2528(int param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  float10 fVar2;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_004f2686;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if ((param_4 == (double)_DAT_004f2698) && (*(int *)(param_1 + 0x268) != 0)) {
    puStack_2c = &stack0xfffffffc;
    FUN_004051d4(param_2,*(undefined4 *)(param_1 + 0x268));
  }
  else if ((*(byte *)(param_1 + 0x26c) & 2) == 0) {
    fVar2 = (float10)param_4;
    FUN_0040be20(CONCAT31((int3)((uint)&local_1c >> 8),2),0x12,0,&local_1c,SUB104(fVar2,0),
                 (int)((unkuint10)fVar2 >> 0x20),(short)((unkuint10)fVar2 >> 0x40));
    FUN_00404c64(&local_18,3);
    FUN_004051d4(param_2,local_18);
  }
  else if (*(int *)(param_1 + 0x270) < 1) {
    fVar2 = (float10)param_4;
    puStack_2c = &stack0xfffffffc;
    FUN_0040bdc0(&local_14,param_2,0,SUB104(fVar2,0),(int)((unkuint10)fVar2 >> 0x20),
                 (short)((unkuint10)fVar2 >> 0x40));
    FUN_00404c64(&local_10,3);
    FUN_004051d4(param_2,local_10);
  }
  else {
    fVar2 = (float10)param_4;
    puStack_2c = &stack0xfffffffc;
    FUN_0040be20(CONCAT31((int3)((uint)&local_c >> 8),2),0x12,*(int *)(param_1 + 0x270),&local_c,
                 SUB104(fVar2,0),(int)((unkuint10)fVar2 >> 0x20),(short)((unkuint10)fVar2 >> 0x40));
    FUN_00404c64(&local_8,3);
    FUN_004051d4(param_2,local_8);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004f268d;
  puStack_30 = (undefined1 *)0x4f265d;
  FUN_004048d4(&local_1c,uStack_34,puVar1);
  puStack_30 = (undefined1 *)0x4f2665;
  FUN_004048d4(&local_18);
  puStack_30 = (undefined1 *)0x4f266d;
  FUN_004048d4(&local_14);
  puStack_30 = (undefined1 *)0x4f2675;
  FUN_004048d4(&local_10);
  puStack_30 = (undefined1 *)0x4f267d;
  FUN_004048d4(&local_c);
  puStack_30 = (undefined1 *)0x4f2685;
  FUN_004048d4(&local_8);
  return;
}

