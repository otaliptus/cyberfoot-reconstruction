// Address: 004d46bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d46bc(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    (&DAT_0067ad98)[iVar2] = 1;
    (&DAT_0067ad18)[iVar2] = 1;
    (&DAT_0067ac0c)[iVar2] = 0xffff;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x80);
  iVar2 = FUN_00404ba4(PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_006696cc);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      bVar1 = *(byte *)(DAT_0067ad0c + iVar3);
      (&DAT_0067ad98)[bVar1] = 0;
      (&DAT_0067ad18)[bVar1] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar2 = FUN_00404ba4(PTR_DAT_006696d4);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      bVar1 = *(byte *)(DAT_0067ad14 + iVar3);
      (&DAT_0067ad98)[bVar1] = 0;
      (&DAT_0067ad18)[bVar1] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar2 = FUN_00404ba4(PTR_s_________<_>__________006696d0);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      (&DAT_0067ad98)[*(byte *)(DAT_0067ad10 + iVar3)] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar2 = FUN_00404ba4(PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_006696c8);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      (&DAT_0067ac0c)[*(byte *)(DAT_0067ac08 + iVar3)] = (short)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  DAT_006696d8 = 0;
  return;
}

