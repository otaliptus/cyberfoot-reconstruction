// Address: 005be848
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_005be848(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = FUN_0047e4c0();
  if (iVar2 != 0) {
    cVar1 = FUN_00403c10(iVar2,PTR_PTR_0047ce6c);
    if ((cVar1 == '\0') || (*(char *)(iVar2 + 0x22f) == '\x01')) {
      if (*(int *)(*(int *)PTR_DAT_0066b3ac + 0x44) != 0) {
        uVar3 = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_0066b3ac + 0x44) + 0x248);
      }
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x248);
    }
  }
  return uVar3;
}

