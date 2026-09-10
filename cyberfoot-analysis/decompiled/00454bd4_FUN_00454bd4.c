// Address: 00454bd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454bd4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  int x;
  HDC hdcDst;
  HIMAGELIST himl;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int i;
  int y;
  UINT fStyle;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_1c [16];
  int *local_c;
  undefined4 local_8;
  
  puStack_2c = (undefined1 *)0x454beb;
  local_c = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_30 = &LAB_00454cb9;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  iVar3 = FUN_00473f5c(param_1);
  (**(code **)(*local_c + 0x40))(local_c,iVar3 * *(int *)(param_1 + 0x34));
  (**(code **)(*local_c + 0x34))(local_c,*(undefined4 *)(param_1 + 0x30));
  FUN_0040709c(0,0,*(undefined4 *)(*(int *)(param_4 + -4) + 0x48),local_1c,
               *(undefined4 *)(*(int *)(param_4 + -4) + 0x4c));
  iVar3 = FUN_00430280(local_c);
  FUN_0042ab6c(*(undefined4 *)(iVar3 + 0x14),0xff00000f);
  FUN_0042af8c(iVar3,local_1c);
  iVar3 = FUN_00473f5c(param_1);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      fStyle = 1;
      y = 0;
      lVar1 = (longlong)*(int *)(param_1 + 0x34) * (longlong)iVar4;
      x = (int)lVar1;
      FUN_00430280(local_c,(int)((ulonglong)lVar1 >> 0x20));
      hdcDst = (HDC)FUN_0042b5a8();
      i = iVar4;
      himl = (HIMAGELIST)FUN_00473bd0(param_1);
      ImageList_Draw(himl,i,hdcDst,x,y,fStyle);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_8 = FUN_00431788(local_c);
  puVar2 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00454cc0;
  puStack_30 = (undefined1 *)0x454cb8;
  FUN_00403a84(local_c,uStack_34,puVar2);
  return;
}

