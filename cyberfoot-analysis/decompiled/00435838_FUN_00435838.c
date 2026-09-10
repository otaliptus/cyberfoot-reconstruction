// Address: 00435838
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00435838(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_0066c978 != (code *)0x0) {
    iVar2 = (*DAT_0066c978)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_00435864;
    }
  }
  bVar1 = 0;
LAB_00435864:
  return -(uint)bVar1;
}

