// Address: 00428058
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00428058(HWND param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)GetWindowLongA(param_1,-4);
  DestroyWindow(param_1);
  if (pcVar1 != DefWindowProcA) {
    FUN_00427f80(pcVar1);
  }
  return;
}

