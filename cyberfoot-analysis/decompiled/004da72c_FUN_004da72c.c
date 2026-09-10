// Address: 004da72c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004da72c(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  func_0x004d97cc(param_1,param_2);
  uVar1 = DAT_006620c8;
  cVar2 = FUN_00403c10(param_1,DAT_006620c8);
  if (cVar2 != '\0') {
    cVar2 = FUN_00403c10(param_2,uVar1);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
    }
  }
  uVar1 = DAT_006620c8;
  cVar2 = FUN_00403c10(param_1,DAT_006620c8);
  if (cVar2 != '\0') {
    cVar2 = FUN_00403c10(param_2,uVar1);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
    }
  }
  uVar1 = DAT_006620c8;
  cVar2 = FUN_00403c10(param_1,DAT_006620c8);
  if (cVar2 != '\0') {
    cVar2 = FUN_00403c10(param_2,uVar1);
    if (cVar2 != '\0') {
      FUN_00404928(param_1 + 0xd0,*(undefined4 *)(param_2 + 0xd0));
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    }
  }
  uVar1 = DAT_006620c8;
  cVar2 = FUN_00403c10(param_1,DAT_006620c8);
  if (cVar2 != '\0') {
    cVar2 = FUN_00403c10(param_2,uVar1);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    }
  }
  return;
}

