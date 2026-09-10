// Address: 004ab434
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ab434(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int *piVar4;
  
  puVar3 = &stack0xfffffffc;
  cVar1 = FUN_00403c10(param_2,PTR_LAB_004a5420);
  if (cVar1 == '\0') {
    cVar1 = FUN_00403c10(param_2,PTR_PTR_00429378);
    if ((cVar1 != '\0') && (cVar1 = FUN_004ab8f4(param_1), cVar1 != '\0')) {
      uVar2 = FUN_004ab384();
      FUN_00431290(param_2,uVar2,puVar3);
      uVar2 = (**(code **)(*param_1 + 0x2c))();
      (**(code **)(*param_2 + 0x40))(param_2,uVar2);
      uVar2 = (**(code **)(*param_1 + 0x20))();
      (**(code **)(*param_2 + 0x34))(param_2,uVar2);
      piVar4 = param_1;
      uVar2 = FUN_00430280(param_2);
      FUN_0042ae64(uVar2,0,0,piVar4);
      cVar1 = FUN_004ab83c(param_1);
      if (cVar1 != '\x01') {
        return;
      }
      uVar2 = FUN_004a63c4(param_1[0x4e],PTR_PTR_004a5790);
      uVar2 = FUN_00403c34(uVar2,PTR_PTR_004a5790);
      uVar2 = FUN_004a7510(uVar2);
      FUN_004313f8(param_2,uVar2);
      (**(code **)(*param_2 + 0x3c))(param_2,1);
      return;
    }
    FUN_0041e750(param_1,param_2);
  }
  else {
    FUN_004ab6b4(param_2,param_1);
  }
  return;
}

