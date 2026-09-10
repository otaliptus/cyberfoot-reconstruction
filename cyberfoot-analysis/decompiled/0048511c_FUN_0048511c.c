// Address: 0048511c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048511c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  LPCSTR lpSubKey;
  LSTATUS LVar5;
  undefined4 *in_FS_OFFSET;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  undefined4 uStack_274;
  undefined1 *puStack_270;
  undefined1 *puStack_26c;
  undefined4 local_264;
  HKL local_260;
  undefined1 local_25c;
  undefined1 local_258 [64];
  BYTE local_218 [256];
  HKL local_118 [64];
  HKL *local_18;
  int local_14;
  HKEY local_10;
  DWORD local_c;
  int local_8;
  
  puStack_26c = &stack0xfffffffc;
  local_264 = 0;
  puStack_270 = &LAB_004852c7;
  uStack_274 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_274;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar3 = FUN_00403a54(PTR_PTR_0041bda0,1);
    *(undefined4 *)(local_8 + 0x34) = uVar3;
    FUN_004048d4(local_8 + 0x38);
    iVar4 = GetKeyboardLayoutList(0x40,local_118);
    if (-1 < iVar4 + -1) {
      local_18 = local_118;
      local_14 = iVar4;
      do {
        cVar2 = FUN_00471860(*local_18);
        if (cVar2 != '\0') {
          phkResult = &local_10;
          samDesired = 0x20019;
          ulOptions = 0;
          local_260 = *local_18;
          local_25c = 0;
          lpSubKey = (LPCSTR)FUN_0040ade4(local_258,
                                          "System\\CurrentControlSet\\Control\\Keyboard Layouts\\%.8x"
                                          ,&local_260,0);
          LVar5 = RegOpenKeyExA((HKEY)0x80000002,lpSubKey,ulOptions,samDesired,phkResult);
          if (LVar5 == 0) {
            uVar3 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xfffffd80;
            local_c = 0x100;
            LVar5 = RegQueryValueExA(local_10,"layout text",(LPDWORD)0x0,(LPDWORD)0x0,local_218,
                                     &local_c);
            if (LVar5 == 0) {
              FUN_00404b54(&local_264,local_218,0x100);
              (**(code **)(**(int **)(local_8 + 0x34) + 0x3c))
                        (*(int **)(local_8 + 0x34),local_264,*local_18);
              if (*local_18 == *(HKL *)(local_8 + 0x3c)) {
                FUN_00404b54(local_8 + 0x38,local_218,0x100);
              }
            }
            *in_FS_OFFSET = uVar3;
            RegCloseKey(local_10);
            return;
          }
        }
        local_18 = local_18 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    iVar4 = *(int *)(local_8 + 0x34);
    *(undefined1 *)(iVar4 + 0x1d) = 0;
    FUN_00420824(iVar4,1);
    puVar1 = puStack_26c;
  }
  puStack_26c = puVar1;
  puVar1 = puStack_26c;
  *in_FS_OFFSET = uStack_274;
  puStack_26c = &LAB_004852ce;
  puStack_270 = (undefined1 *)0x4852c6;
  FUN_004048d4(&local_264,uStack_274,puVar1);
  return;
}

