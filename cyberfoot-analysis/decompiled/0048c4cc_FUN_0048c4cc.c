// Address: 0048c4cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0048c4cc(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar1 = param_1[1];
  if (0x3b9ac9f4 < param_3) {
    FUN_0048c4b8(param_1,1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0xe;
    *(int *)(iVar2 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  puVar3 = (undefined4 *)0x0;
  for (puVar4 = *(undefined4 **)(iVar1 + 0x34 + param_2 * 4);
      (puVar4 != (undefined4 *)0x0 && ((uint)puVar4[2] < param_3)); puVar4 = (undefined4 *)*puVar4)
  {
    puVar3 = puVar4;
  }
  if (puVar4 == (undefined4 *)0x0) {
    iVar2 = param_3 + 0xc;
    if (puVar3 == (undefined4 *)0x0) {
      uVar5 = *(uint *)(&DAT_006653a8 + param_2 * 4);
    }
    else {
      uVar5 = *(uint *)(&DAT_006653b0 + param_2 * 4);
    }
    if (1000000000U - iVar2 < uVar5) {
      uVar5 = 1000000000U - iVar2;
    }
    while (puVar4 = (undefined4 *)FUN_0048d0d8(param_1,iVar2 + uVar5), puVar4 == (undefined4 *)0x0)
    {
      uVar5 = uVar5 / 2;
      if (uVar5 < 0x32) {
        FUN_0048c4b8(param_1,2);
      }
    }
    *(uint *)(iVar1 + 0x4c) = iVar2 + uVar5 + *(int *)(iVar1 + 0x4c);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = uVar5 + param_3;
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 **)(iVar1 + 0x34 + param_2 * 4) = puVar4;
    }
    else {
      *puVar3 = puVar4;
    }
  }
  iVar1 = puVar4[1];
  puVar4[1] = puVar4[1] + param_3;
  puVar4[2] = puVar4[2] - param_3;
  return (int)puVar4 + iVar1 + 0xc;
}

