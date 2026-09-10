// Address: 00491a1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00491a1c(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,param_2 << 5);
  *puVar1 = 0;
  puVar1[1] = 0x1f;
  puVar1[2] = 0;
  puVar1[3] = 0x3f;
  puVar1[4] = 0;
  puVar1[5] = 0x1f;
  FUN_004913ec(param_1,puVar1);
  iVar2 = FUN_004917bc(param_1,puVar1,1,param_2);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      FUN_004918d8(param_1,puVar1 + iVar3 * 8,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  param_1[0x21] = iVar2;
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + 0x14) = 0x60;
  *(int *)(iVar3 + 0x18) = iVar2;
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}

