// Address: 00463eb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00463eb4(int param_1,char param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (DAT_0066cb98 == 0) {
      DAT_0066cb98 = FUN_00403a54(PTR_PTR_0041b73c,1);
    }
    iVar1 = FUN_0041e078(DAT_0066cb98,param_1);
    if (param_2 == '\0') {
      if (iVar1 != -1) {
        FUN_0041df0c(DAT_0066cb98,iVar1);
      }
    }
    else if (iVar1 == -1) {
      FUN_0041dec0(DAT_0066cb98,param_1);
    }
  }
  return;
}

