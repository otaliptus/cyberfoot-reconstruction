// Address: 00479f08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00479f08(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  if ((((*(char *)(param_4 + -1) == '\0') &&
       (*(uint *)(param_4 + -8) == (uint)*(ushort *)(param_1 + 0x50))) ||
      ((*(char *)(param_4 + -1) == '\x01' && (*(int *)(param_4 + -8) == *(int *)(param_1 + 0x34)))))
     || ((*(char *)(param_4 + -1) == '\x02' &&
         (*(uint *)(param_4 + -8) == (uint)*(ushort *)(param_1 + 0x60))))) {
    *(int *)(param_4 + -0xc) = param_1;
    uStack_8 = 0x1000000;
  }
  else {
    iVar2 = FUN_00478b4c(param_1);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        FUN_00478b5c(param_1,iVar3);
        cVar1 = FUN_00479f08();
        if (cVar1 != '\0') {
          uStack_8 = 0x1000000;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return uStack_8 >> 0x18;
}

