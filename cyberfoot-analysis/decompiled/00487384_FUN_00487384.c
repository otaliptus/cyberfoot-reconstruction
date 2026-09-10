// Address: 00487384
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487384(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0xa4) == '\0') {
    if (*(HWND *)(param_1 + 0x30) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x30),0xb020,0,(LPARAM)&param_4);
    }
  }
  else {
    FUN_0041dffc(*(undefined4 *)(param_1 + 0xa8));
    puVar1 = (undefined4 *)FUN_004027fc(8);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    FUN_0041dec0(*(undefined4 *)(param_1 + 0xa8),puVar1);
  }
  return;
}

