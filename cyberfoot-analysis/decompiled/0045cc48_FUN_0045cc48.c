// Address: 0045cc48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045cc48(int param_1,LPARAM *param_2)

{
  HWND hWnd;
  undefined4 uVar1;
  
  if (((PTR_DAT_0066b7ac[0xc] == '\0') || (*(int *)PTR_DAT_0066b790 == 2)) ||
     ((*(byte *)((int)param_2 + 5) & 8) == 0)) {
    uVar1 = FUN_00408118(param_2[2],param_2 + 0x13,&LAB_0045cd14,param_2[8],DAT_0066c668,0,
                         param_2[7],param_2[6],param_2[5],param_2[4],param_2[3],param_2[1]);
    *(undefined4 *)(param_1 + 0x180) = uVar1;
  }
  else {
    hWnd = (HWND)FUN_00408118(param_2[2],param_2 + 0x13,&LAB_0045cd14,param_2[8],DAT_0066c668,0,
                              param_2[7],param_2[6],param_2[5],param_2[4],param_2[3],
                              param_2[1] & 0xfffff7ff);
    *(HWND *)(param_1 + 0x180) = hWnd;
    if (hWnd != (HWND)0x0) {
      SendMessageA(hWnd,0xcf,1,0);
    }
  }
  SendMessageA(*(HWND *)(param_1 + 0x180),0xc,0,*param_2);
  return;
}

