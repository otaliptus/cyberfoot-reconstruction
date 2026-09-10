// Address: 00404740
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404740(void)

{
  HMODULE hLibModule;
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  pcVar1 = DAT_0066c048;
  if (DAT_0066c660 == 0) {
    while (DAT_0066c048 = pcVar1, pcVar1 != (code *)0x0) {
      DAT_0066c048 = (code *)0x0;
      (*pcVar1)();
      pcVar1 = DAT_0066c048;
    }
  }
  if (DAT_00662004 != 0) {
    FUN_00404628();
    FUN_004046b4();
    DAT_00662004 = 0;
  }
  while( true ) {
    if ((DAT_0066c660 == 2) && (DAT_00662000 == 0)) {
      DAT_0066c644 = 0;
    }
    FUN_0040449c();
    if (((DAT_0066c660 < 2) || (DAT_00662000 != 0)) && (DAT_0066c648 != 0)) {
      FUN_00406810();
      hLibModule = *(HMODULE *)(DAT_0066c648 + 0x10);
      if ((hLibModule != *(HMODULE *)(DAT_0066c648 + 4)) && (hLibModule != (HMODULE)0x0)) {
        FreeLibrary(hLibModule);
      }
    }
    FUN_00404474();
    if (DAT_0066c660 == 1) {
      (*DAT_0066c65c)();
    }
    if (DAT_0066c660 != 0) {
      FUN_00404684();
    }
    if (DAT_0066c638 == (undefined4 *)0x0) break;
    puVar3 = DAT_0066c638;
    puVar4 = &DAT_0066c638;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  if (DAT_0066c028 != (code *)0x0) {
    (*DAT_0066c028)();
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(DAT_00662000);
}

