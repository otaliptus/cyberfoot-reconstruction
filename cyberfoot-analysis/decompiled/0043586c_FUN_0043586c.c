// Address: 0043586c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0043586c(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_0066c97c != (code *)0x0) {
    iVar2 = (*DAT_0066c97c)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_0043588c;
    }
  }
  bVar1 = 0;
LAB_0043588c:
  return -(uint)bVar1;
}

