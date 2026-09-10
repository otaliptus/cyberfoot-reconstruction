// Address: 005b5344
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm40_bt1Click(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char *pcVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uStack_27c;
  undefined1 *puStack_278;
  undefined1 *puStack_274;
  undefined4 local_268;
  undefined1 local_264 [256];
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c [344];
  
  local_268 = 0;
  local_160 = 0;
  local_164 = 0;
  puStack_274 = (undefined1 *)0x5b5376;
  FUN_00405628(local_15c,PTR_DAT_00408718);
  puStack_278 = &LAB_005b54ab;
  uStack_27c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_27c;
  bVar1 = false;
  puVar5 = &DAT_005b54c0;
  puStack_274 = &stack0xfffffffc;
  FUN_00466208(*(undefined4 *)(param_1 + 0x2f8),&local_164);
  pcVar3 = "*.s15";
  uVar4 = local_164;
  FUN_00404c64(&local_160,3);
  iVar2 = FUN_0040a4d4(local_160,0x3f,local_15c,pcVar3,uVar4);
  if (iVar2 == 0) {
    bVar1 = true;
  }
  while( true ) {
    iVar2 = FUN_0040a524(local_15c);
    if (iVar2 != 0) break;
    bVar1 = true;
  }
  if (bVar1) {
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b4c68,PTR_DAT_0066ad74);
    (**(code **)(**(int **)PTR_DAT_0066ad74 + 0xec))();
  }
  else {
    FUN_00466208(*(undefined4 *)(param_1 + 0x2f8),&local_268);
    FUN_00404bac(&local_268,&LAB_005b54e0);
    FUN_00404b80(local_264,local_268,0xff);
    FUN_004030e0(PTR_DAT_0066ac78 + 0x8c,local_264,0x32);
    FUN_00483bc4(DAT_006d2a80);
  }
  *in_FS_OFFSET = pcVar3;
  FUN_004048d4(&local_268,pcVar3,puVar5,&LAB_005b54b2);
  FUN_004048d4(&local_164);
  FUN_004048d4(&local_160);
  FUN_004056f8(local_15c,PTR_DAT_00408718);
  return;
}

