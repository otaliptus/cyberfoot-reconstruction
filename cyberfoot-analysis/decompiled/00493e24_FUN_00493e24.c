// Address: 00493e24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00493e24(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  uVar2 = param_4 - *param_5;
  if (*(uint *)(iVar1 + 0x10) < (uint)(param_4 - *param_5)) {
    uVar2 = *(uint *)(iVar1 + 0x10);
  }
  local_10 = 0;
  local_c = param_3;
  local_8 = param_1;
  (**(code **)(*(int *)(param_1 + 0x1c4) + 4))
            (param_1,param_2,param_3,uVar2,&local_10,*(undefined4 *)(iVar1 + 0xc),param_7);
  (**(code **)(*(int *)(local_8 + 0x1cc) + 4))
            (local_8,*(undefined4 *)(iVar1 + 0xc),*param_5 * 4 + param_6,local_10);
  *param_5 = *param_5 + local_10;
  return;
}

