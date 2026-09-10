// Address: 00584518
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00584518(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x210);
  if (cVar1 == '\x03') {
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x70);
  }
  else if (cVar1 == '\x01') {
    if ((*(char *)(param_1 + 0x211) == '\x01') && (*(int *)(param_1 + 0x218) == 0)) {
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 500);
      *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x1f0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x1e8);
    }
  }
  else if (cVar1 == '\x02') {
    if ((*(char *)(param_1 + 0x211) == '\x02') && (*(int *)(param_1 + 0x218) == 0)) {
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1f0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1e8);
    }
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x1ec);
  }
  cVar1 = *(char *)(param_1 + 0x211);
  if (cVar1 == '\x03') {
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x70);
  }
  else if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1e8);
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1e8);
    if ((*(char *)(param_1 + 0x210) == '\x02') && (*(int *)(param_1 + 0x218) == 0)) {
      *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 500);
    }
    else {
      *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1ec);
    }
  }
  FUN_00584438();
  return;
}

