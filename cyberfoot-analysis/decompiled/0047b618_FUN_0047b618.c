// Address: 0047b618
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047b618(undefined4 param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  FUN_00404928(param_2,param_1);
  iVar3 = 1;
  do {
    iVar2 = FUN_00404ba4(*param_2);
    if (iVar2 < iVar3) {
      return;
    }
    bVar1 = *(byte *)(*param_2 + -1 + iVar3);
    if (((byte)PTR_DAT_0066b77c[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
      if (bVar1 == 0x26) {
        if ((PTR_DAT_0066b7ac[0xc] != '\0') && (1 < iVar3)) {
          iVar2 = FUN_00404ba4(*param_2);
          if ((1 < iVar2 - iVar3) &&
             ((*(char *)(*param_2 + -2 + iVar3) == '(' && (*(char *)(*param_2 + 1 + iVar3) == ')')))
             ) {
            FUN_00404e44(param_2,iVar3 + -1,4);
            goto LAB_0047b69d;
          }
        }
        FUN_00404e44(param_2,iVar3,1);
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
LAB_0047b69d:
    iVar3 = iVar3 + 1;
  } while( true );
}

