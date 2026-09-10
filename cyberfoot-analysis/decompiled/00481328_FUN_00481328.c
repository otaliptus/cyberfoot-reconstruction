// Address: 00481328
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00481328(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((*(char *)(param_1 + 0x22f) == '\x02') && (*(int *)(param_1 + 0x254) != 0)) &&
     (iVar1 = FUN_00484ee4(DAT_0066cbf8), -1 < iVar1 + -1)) {
    iVar3 = 0;
    do {
      iVar2 = FUN_00484ed0(DAT_0066cbf8,iVar3);
      if ((*(char *)(iVar2 + 0x22f) == '\x01') && (param_2 = param_2 + -1, param_2 < 0)) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

