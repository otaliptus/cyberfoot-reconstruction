// Address: 00485aec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00485aec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  tagLOGFONTA local_48;
  HDC local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    local_8 = param_1;
    uVar1 = FUN_00403a54(PTR_PTR_0041bda0,1);
    *(undefined4 *)(local_8 + 0x30) = uVar1;
    local_c = GetDC((HWND)0x0);
    uVar1 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffac;
    (**(code **)(**(int **)(local_8 + 0x30) + 0x38))(*(int **)(local_8 + 0x30),"Default");
    FUN_004032a8(&local_48,0x3c,0);
    local_48.lfCharSet = '\x01';
    EnumFontFamiliesExA(local_c,&local_48,(FONTENUMPROCA)&LAB_00484ba0,*(LPARAM *)(local_8 + 0x30),0
                       );
    FUN_00420824(*(undefined4 *)(local_8 + 0x30),1);
    *in_FS_OFFSET = uVar1;
    iVar2 = ReleaseDC((HWND)0x0,local_c);
    return iVar2;
  }
  return *(int *)(param_1 + 0x30);
}

