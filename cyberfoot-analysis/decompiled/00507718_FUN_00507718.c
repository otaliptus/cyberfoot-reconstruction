// Address: 00507718
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00507718(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  if (param_3 != param_4) {
    cVar1 = FUN_00515878(param_1);
    if (cVar1 != '\0') {
      *(ushort *)(param_1 + 0x139) = *(ushort *)(param_1 + 0x139) | 0x80;
      if (param_4 < param_3) {
        param_3 = param_4;
      }
      if (param_3 <= param_4) {
        iVar2 = (param_4 - param_3) + 1;
        do {
          cVar1 = (**(code **)(*param_1 + 300))(param_1,param_3);
          if (cVar1 != '\0') {
            (**(code **)(*param_1 + 0x1ac))(param_1,param_3,1);
          }
          param_3 = param_3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}

