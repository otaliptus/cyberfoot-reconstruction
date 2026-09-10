// Address: 0048c8bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048c8bc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[1];
  if (param_2 != 1) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0xe;
    *(int *)(iVar2 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  puVar3 = (undefined4 *)FUN_0048c4cc(param_1,param_2,0x80);
  *puVar3 = 0;
  puVar3[1] = param_5;
  puVar3[2] = param_6;
  puVar3[3] = param_4;
  puVar3[8] = param_3;
  puVar3[10] = 0;
  puVar3[0xb] = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 **)(iVar1 + 0x48) = puVar3;
  return;
}

