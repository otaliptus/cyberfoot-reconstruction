// Address: 0040e570
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040e570(void)

{
  int iVar1;
  int iVar2;
  int local_10;
  undefined1 local_c;
  
  iVar1 = FUN_004029e4();
  for (iVar2 = 0; (iVar2 < 7 && (iVar1 != (&DAT_00662248)[iVar2 * 2])); iVar2 = iVar2 + 1) {
  }
  if (iVar2 < 7) {
    iVar2 = FUN_0040e370(PTR_DAT_004088ac,1,(&DAT_0066224c)[iVar2 * 2]);
  }
  else {
    local_c = 0;
    local_10 = iVar1;
    iVar2 = FUN_0040e468(PTR_DAT_004088ac,1,PTR_PTR_0066aecc,0,&local_10);
  }
  *(int *)(iVar2 + 0xc) = iVar1;
  return;
}

