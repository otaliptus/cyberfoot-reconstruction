// Address: 00432ae4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00432ae4(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_0066c900 == 0) {
    FUN_00432a84();
  }
  if (DAT_0066c904 != (code *)0x0) {
    iVar2 = (*DAT_0066c904)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_00432b0f;
    }
  }
  bVar1 = 0;
LAB_00432b0f:
  return -(uint)bVar1;
}

