// Address: 00487684
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487684(int param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  tagRECT local_58;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  HWND local_10;
  int local_c;
  int local_8;
  
  local_8 = param_1;
  local_10 = GetActiveWindow();
  local_18 = (**(code **)PTR_DAT_0066b184)();
  local_1c = (**(code **)PTR_DAT_0066b184)();
  if (local_18 != local_1c) {
    local_48 = 0x28;
    (**(code **)PTR_DAT_0066afbc)();
    GetWindowRect(*(HWND *)(local_8 + 0x30),&local_58);
    iVar2 = local_38 - local_40 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((local_38 - local_40 & 1U) != 0);
    }
    iVar3 = local_3c - local_44 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((local_3c - local_44 & 1U) != 0);
    }
    SetWindowPos(*(HWND *)(local_8 + 0x30),(HWND)0x0,iVar3 + local_44,iVar2 + local_40,0,0,0x1d);
  }
  local_14 = FUN_0047e0e0(0);
  local_20 = FUN_0047dffc();
  cVar1 = FUN_00486580(local_8);
  if (cVar1 != '\0') {
    param_4 = param_4 | 0x100000;
  }
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff80;
  local_c = MessageBoxA(*(HWND *)(local_8 + 0x30),param_2,param_3,param_4);
  *in_FS_OFFSET = uVar4;
  if (local_18 != local_1c) {
    iVar2 = local_58.bottom - local_58.top >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((local_58.bottom - local_58.top & 1U) != 0);
    }
    iVar3 = local_58.right - local_58.left >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((local_58.right - local_58.left & 1U) != 0);
    }
    SetWindowPos(*(HWND *)(local_8 + 0x30),(HWND)0x0,iVar3 + local_58.left,iVar2 + local_58.top,0,0,
                 0x1d);
  }
  FUN_0047e194(local_14);
  SetActiveWindow(local_10);
  FUN_0047e004(local_20);
  return;
}

