// Address: 0065e50c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm1_Image2MouseDown(void)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  
  local_20 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  iVar2 = 4;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_0065e66b;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0,0);
  FUN_0041c968(in_stack_00000008,in_stack_00000004,&local_24);
  pt.y = (LONG)local_20;
  pt.x = (LONG)local_24;
  BVar1 = PtInRect((RECT *)&DAT_007c95c8,pt);
  if (BVar1 == 0) {
    FUN_0041c968(in_stack_00000008,in_stack_00000004,&local_24);
    pt_00.y = (LONG)local_20;
    pt_00.x = (LONG)local_24;
    BVar1 = PtInRect((RECT *)&DAT_007c95d8,pt_00);
    if (BVar1 != 0) {
      uVar3 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffcc;
      FUN_004aca0c("InternetExplorer.Application",&local_28);
      FUN_00416558(&stack0xffffffe4,local_28);
      FUN_00411d54();
      FUN_00411d54();
      *in_FS_OFFSET = uVar3;
    }
  }
  else {
    uVar3 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffcc;
    FUN_00403a84(DAT_007c9584);
    *in_FS_OFFSET = uVar3;
    FUN_004875e0(*(undefined4 *)PTR_DAT_0066b3ac,uVar3,puVar4);
  }
  puVar4 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0065e672;
  local_24 = (undefined1 *)0x65e662;
  FUN_00406880(&local_28,local_28,puVar4);
  local_24 = (undefined1 *)0x65e66a;
  FUN_00411d4c(&stack0xffffffe4);
  return;
}

