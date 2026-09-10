// Address: 00464084
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00464084(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = *(int *)(DAT_0066cb74 + 4);
  if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x1a7) != '\0')) && (*(int *)(iVar1 + 0x178) != 0)) &&
     (iVar2 = FUN_0046b49c(iVar1), iVar2 != 0)) {
    iVar2 = FUN_0046b49c(iVar1);
    if ((iVar2 == 1) &&
       (iVar2 = FUN_0041e01c(*(undefined4 *)(iVar1 + 0x178),0),
       iVar2 == *(int *)(DAT_0066cb74 + 0x38))) {
      return 0;
    }
    iVar2 = FUN_00464ab4(DAT_0066cb74 + 0xc,0);
    while( true ) {
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar1 == iVar2) {
        return 0;
      }
      iVar3 = FUN_0041e078(*(undefined4 *)(iVar1 + 0x178),iVar2);
      if (iVar3 != -1) break;
      iVar2 = *(int *)(iVar2 + 0x30);
    }
    uVar4 = FUN_0046b4b0(iVar1,iVar3);
  }
  return uVar4;
}

