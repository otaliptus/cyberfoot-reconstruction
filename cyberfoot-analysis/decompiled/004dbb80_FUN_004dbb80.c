// Address: 004dbb80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dbb80(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0040502c(param_2,param_1);
  iVar2 = 1;
  do {
    iVar1 = FUN_00405260(*param_2);
    if (iVar1 < iVar2) {
      return;
    }
    if (*(short *)(*param_2 + -2 + iVar2 * 2) == 0x26) {
      if ((PTR_DAT_0066b7ac[0xc] != '\0') && (1 < iVar2)) {
        iVar1 = FUN_00405260(*param_2);
        if ((1 < iVar1 - iVar2) &&
           ((*(short *)(*param_2 + -4 + iVar2 * 2) == 0x28 &&
            (*(short *)(*param_2 + 2 + iVar2 * 2) == 0x29)))) {
          FUN_00405448(param_2,iVar2 + -1,4);
          iVar2 = iVar2 + -2;
          goto LAB_004dbbf4;
        }
      }
      FUN_00405448(param_2,iVar2,1);
    }
LAB_004dbbf4:
    iVar2 = iVar2 + 1;
  } while( true );
}

