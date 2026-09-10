// Address: 004854a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004854a4(int param_1)

{
  undefined1 *puVar1;
  BOOL BVar2;
  HFONT pHVar3;
  HGDIOBJ pvVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1a8;
  undefined1 *puStack_1a4;
  undefined1 *puStack_1a0;
  undefined4 local_195 [40];
  LOGFONTA local_f5;
  LOGFONTA local_b9 [2];
  LOGFONTA local_41;
  undefined1 local_5;
  
  puStack_1a0 = &stack0xfffffffc;
  local_5 = 0;
  if (DAT_0066cbf4 != 0) {
    local_5 = *(undefined1 *)(DAT_0066cbf4 + 0x88);
  }
  puStack_1a4 = &LAB_004855e9;
  uStack_1a8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1a8;
  puVar1 = &stack0xfffffffc;
  if (DAT_0066cbf4 != 0) {
    FUN_00487b14(DAT_0066cbf4,0);
    puVar1 = puStack_1a0;
  }
  puStack_1a0 = puVar1;
  BVar2 = SystemParametersInfoA(0x1f,0x3c,&local_41,0);
  if (BVar2 == 0) {
    pvVar4 = GetStockObject(0xd);
    FUN_0042a55c(*(undefined4 *)(param_1 + 0x84),pvVar4);
  }
  else {
    pHVar3 = CreateFontIndirectA(&local_41);
    FUN_0042a55c(*(undefined4 *)(param_1 + 0x84),pHVar3);
  }
  local_195[0] = 0x154;
  BVar2 = SystemParametersInfoA(0x29,0,local_195,0);
  if (BVar2 == 0) {
    FUN_0042a640(*(undefined4 *)(param_1 + 0x80),8);
    pvVar4 = GetStockObject(0xd);
    FUN_0042a55c(*(undefined4 *)(param_1 + 0x88),pvVar4);
  }
  else {
    pHVar3 = CreateFontIndirectA(local_b9);
    FUN_0042a55c(*(undefined4 *)(param_1 + 0x80),pHVar3);
    pHVar3 = CreateFontIndirectA(&local_f5);
    FUN_0042a55c(*(undefined4 *)(param_1 + 0x88),pHVar3);
  }
  FUN_0042a3a0(*(undefined4 *)(param_1 + 0x80),0xff000017);
  FUN_0042a3a0(*(undefined4 *)(param_1 + 0x88),0xff000007);
  puVar1 = puStack_1a0;
  *in_FS_OFFSET = uStack_1a8;
  puStack_1a0 = &LAB_004855f0;
  if (DAT_0066cbf4 != 0) {
    puStack_1a4 = (undefined1 *)0x4855e8;
    FUN_00487b14(DAT_0066cbf4,local_5,puVar1);
  }
  return;
}

