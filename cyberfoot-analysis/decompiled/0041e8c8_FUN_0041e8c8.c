// Address: 0041e8c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e8c8(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  FUN_00406880(param_2);
  if (param_1 != (int *)0x0) {
    iVar2 = FUN_00403c80(param_1);
    if (iVar2 == 0) {
      cVar1 = FUN_00403c10(param_1,PTR_PTR_0041c690);
      if ((cVar1 != '\0') && ((*(byte *)(param_1 + 7) & 0x10) != 0)) {
        FUN_00406880(param_2);
        (**(code **)(*param_1 + 0x28))();
      }
    }
    else {
      cVar1 = FUN_00403c10(param_1,PTR_PTR_0041c690);
      if ((cVar1 == '\0') || ((*(byte *)(param_1 + 7) & 0x10) != 0)) {
        uVar3 = FUN_00406880(param_2);
        FUN_0041e8c8(iVar2,uVar3);
      }
    }
  }
  return;
}

