// Address: 005be9d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005be9d0(int param_1)

{
  LONG LVar1;
  HWND hWnd;
  undefined4 *puVar2;
  undefined4 local_c;
  
  puVar2 = &local_c;
  if ((*(int *)(param_1 + 0x22c) != 0) && (*(int *)(param_1 + 0x180) == 0)) {
    local_c = 0;
    hWnd = *(HWND *)(param_1 + 0x22c);
    (**(code **)(hWnd->unused + 0xc))();
    if (hWnd == (HWND)0x0) {
      FUN_0040e42c(PTR_DAT_004ac464,1,PTR_PTR_0066b7cc,0,puVar2);
      FUN_00404250();
    }
    *(HWND *)(param_1 + 0x180) = hWnd;
    LVar1 = GetWindowLongA(hWnd,-4);
    *(LONG *)(param_1 + 0x174) = LVar1;
    *(int *)PTR_DAT_0066b28c = param_1;
    SetWindowLongA(*(HWND *)(param_1 + 0x180),-4,0x462fa8);
    SendMessageA(*(HWND *)(param_1 + 0x180),0,0,0);
  }
  return;
}

