// Address: 0040b4b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040b4b8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,byte param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  ushort local_30 [12];
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  undefined4 local_10;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 *local_8;
  
  bVar6 = 0;
  local_9 = DAT_0066c68b;
  local_a = DAT_0066c68a;
  local_10 = DAT_0066c684;
  local_11 = DAT_0066c688;
  local_12 = DAT_0066c689;
  local_18 = 0;
  iVar1 = 0x13;
  if ((char)param_3 == '\0') {
    iVar1 = param_5;
    if (param_5 < 2) {
      iVar1 = 2;
    }
    if (0x12 < iVar1) {
      iVar1 = 0x12;
    }
  }
  uVar2 = 9999;
  if (1 < param_6) {
    uVar2 = param_4;
  }
  local_8 = param_1;
  FUN_0040ba80(local_30,param_2,param_3,uVar2,iVar1);
  puVar5 = local_8;
  uVar3 = local_30[0] - 0x7fff;
  if (uVar3 < 2) {
    FUN_0040b5b7(uVar3,extraout_EDX,uVar3);
    puVar4 = &DAT_0040b5a8 + local_18 + extraout_ECX * 3;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  else {
    uVar3 = (uint)param_6;
    if ((param_6 != 1) && ((4 < param_6 || (iVar1 < (short)local_30[0])))) {
      uVar3 = 0;
    }
    (*(code *)(*(int *)((int)&PTR_LAB_0040b594 + local_18 + uVar3 * 4) + local_18))();
  }
  FUN_0040b785((int)puVar5 - (int)local_8);
  return;
}

