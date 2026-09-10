// Address: 00404684
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Unable to track spacebase fully for stack */

bool FUN_00404684(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_00662000;
  LOCK();
  DAT_00662000 = 0;
  UNLOCK();
  puVar3 = DAT_0066c638;
  puVar4 = &DAT_0066c638;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return iVar1 == 0;
}

