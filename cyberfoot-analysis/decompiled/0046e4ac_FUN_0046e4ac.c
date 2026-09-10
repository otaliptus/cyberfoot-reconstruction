// Address: 0046e4ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046e4ac(int param_1)

{
  UINT flags;
  int cx;
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int cy;
  undefined4 uVar2;
  int cInitial;
  int cGrow;
  POINT local_10;
  HIMAGELIST local_8;
  
  if (*(short *)(param_1 + 0x68) != -1) {
    cGrow = 1;
    cInitial = 0xe;
    flags = (**(code **)PTR_DAT_0066b008)();
    cy = 0xd;
    cx = (**(code **)PTR_DAT_0066b008)();
    local_8 = ImageList_Create(cx,cy,flags,cInitial,cGrow);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffd8;
    uVar1 = FUN_004853a4(*(undefined4 *)PTR_DAT_0066b760,(int)*(short *)(param_1 + 0x68));
    FUN_00432b50(local_8,uVar1);
    uVar1 = FUN_004853a4(*(undefined4 *)PTR_DAT_0066b760,(int)*(short *)(param_1 + 0x68));
    FUN_00432b50(local_8,uVar1);
    ImageList_SetDragCursorImage(local_8,0,0,0);
    ImageList_GetDragImage((POINT *)0x0,&local_10);
    ImageList_SetDragCursorImage(local_8,1,local_10.x,local_10.y);
    *in_FS_OFFSET = uVar2;
    ImageList_Destroy(local_8);
    return;
  }
  return;
}

