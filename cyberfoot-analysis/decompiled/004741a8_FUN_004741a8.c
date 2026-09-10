// Address: 004741a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004741a8(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  HIMAGELIST himl;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00474227;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = FUN_00473f5c(param_1);
  if (iVar3 <= param_2) {
    FUN_00406d44(PTR_PTR_0066af88,&local_8);
    FUN_0040e370(PTR_DAT_0041b6dc,1,local_8);
    FUN_00404250();
  }
  cVar2 = FUN_004739fc(param_1);
  if (cVar2 != '\0') {
    himl = (HIMAGELIST)FUN_00473bd0(param_1);
    ImageList_Remove(himl,param_2);
  }
  FUN_00403c80(param_1);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0047422e;
  puStack_18 = (undefined1 *)0x474226;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

