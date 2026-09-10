// Address: 004cfa08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cfa08(int *param_1,char param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') goto LAB_004cfa28;
  }
  *(char *)(param_1 + 0x8d) = param_2;
LAB_004cfa28:
  if ((param_1[0x8e] == 0) && (*(char *)((int)param_1 + 0x236) == '\0')) {
    param_2 = '\0';
  }
  if (*(char *)((int)param_1 + 0x236) == '\x01') {
    *(char *)((int)param_1 + 0x233) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x8c) = 2;
    }
    (**(code **)(*param_1 + 0x80))();
  }
  else if ((param_2 != *(char *)((int)param_1 + 0x233)) &&
          ((*(char *)((int)param_1 + 0x233) == '\0' || ((char)param_1[0x8f] != '\0')))) {
    *(char *)((int)param_1 + 0x233) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
      (**(code **)(*param_1 + 0x80))();
    }
    else {
      if ((char)param_1[0x8c] == '\0') {
        (**(code **)(*param_1 + 0x7c))();
      }
      *(undefined1 *)(param_1 + 0x8c) = 4;
    }
    if (param_2 != '\0') {
      FUN_004d0164(param_1);
    }
  }
  return;
}

