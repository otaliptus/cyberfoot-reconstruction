// Address: 0048c5fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 * FUN_0048c5fc(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[1];
  if (0x3b9ac9f4 < param_3) {
    FUN_0048c4b8(param_1,3);
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
  puVar3 = (undefined4 *)FUN_0048d0e8(param_1,param_3 + 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_0048c4b8(param_1,4);
  }
  *(uint *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + param_3 + 0xc;
  *puVar3 = *(undefined4 *)(iVar1 + 0x3c + param_2 * 4);
  puVar3[1] = param_3;
  puVar3[2] = 0;
  *(undefined4 **)(iVar1 + 0x3c + param_2 * 4) = puVar3;
  return puVar3 + 3;
}

