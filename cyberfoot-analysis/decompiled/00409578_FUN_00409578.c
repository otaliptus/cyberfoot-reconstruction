// Address: 00409578
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409578(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004027fc(0xc);
  *puVar1 = DAT_0066215c;
  puVar1[1] = *(undefined4 *)PTR_DAT_0066ad20;
  puVar1[2] = param_1;
  DAT_0066215c = puVar1;
  *(undefined1 **)PTR_DAT_0066ad20 = &LAB_0040954c;
  return;
}

