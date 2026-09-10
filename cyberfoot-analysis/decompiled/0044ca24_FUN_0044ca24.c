// Address: 0044ca24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044ca24(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == 0x701) {
    (**(code **)(*param_1 + 0xf0))(param_1,iVar1 + 0xc);
  }
  else if (iVar2 == 0x702) {
    FUN_00403c80(param_1);
  }
  else if (iVar2 == 0x704) {
    cVar3 = FUN_0044cad0(param_1,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c));
    if (cVar3 == '\0') {
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
  }
  else if ((iVar2 == 0x708) &&
          (cVar3 = FUN_0044caa0(param_1,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10)),
          cVar3 == '\0')) {
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}

